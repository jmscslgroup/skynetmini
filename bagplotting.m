% choose your file!
filename='skynetmini_2024-11-14-16-46-22.bag';
bag = rosbag(filename);

%% extract the cmd accel
ego_cmd_accel_bag = select(bag,'Topic','/egocar/cmd_accel');
ego_cmd_accel = timeseries(ego_cmd_accel_bag);

%% extract the x velocity
ego_vel_x_bag = select(bag,'Topic','/egocar/vel_x');
ego_vel_x = timeseries(ego_vel_x_bag);

%% extract relative velocity
rel_vel_bag = select(bag,'Topic','/egocar/rel_vel');
rel_vel = timeseries(rel_vel_bag);

%% extract relative distance
lead_dist_bag = select(bag,'Topic','/egocar/lead_dist');
lead_dist = timeseries(lead_dist_bag);

%% plot the results
figure
hold on
% plot(ego_cmd_accel)
plot(ego_cmd_accel)
% plot(ego_vel_x)
plot(ego_vel_x)
% plot(rel_vel)
scatter(rel_vel.Time(:),rel_vel.Data(:),marker='.');
% plot(lead_dist);
scatter(lead_dist.Time(:),lead_dist.Data(:),marker='.')
% Customize plot
legend({'cmd accel(m/s^2)', 'vel x (m/s)','rel vel (m/s)','lead dist (m)'})
ylabel('meters or meters/second')
xlabel('Unix time in GMT')
title('Speed, Relative Velocity, and Relative Distance')
axis equal


