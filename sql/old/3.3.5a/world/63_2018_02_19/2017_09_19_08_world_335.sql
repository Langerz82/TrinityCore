-- Scarlet High Clerist --> Add Waypoints
UPDATE `creature` SET `MovementType`=2 WHERE `guid`=49764;
DELETE FROM `creature_addon` WHERE `guid`=49764;
INSERT INTO `creature_addon` (`guid`, `path_id`, `mount`, `bytes1`, `bytes2`, `emote`, `auras`) VALUES
(49764,497640,0,0,4097,0,'');
DELETE FROM `waypoint_data` WHERE `id`=497640;
INSERT INTO `waypoint_data` (`id`, `point`, `position_x`, `position_y`, `position_z`, `orientation`, `delay`, `move_type`, `action`, `action_chance`, `wpguid`) VALUES
(497640,1,2354.87,-2043.95,152.935,0,0,0,0,100,0),
(497640,2,2340.93,-2056.2,164.053,0,0,0,0,100,0),
(497640,3,2333.52,-2067.57,168.185,0,0,0,0,100,0),
(497640,4,2325.31,-2064.32,168.53,0,0,0,0,100,0),
(497640,5,2336.98,-2055.86,165.002,0,0,0,0,100,0),
(497640,6,2354.35,-2039.92,150.691,0,0,0,0,100,0),
(497640,7,2365.45,-2026.98,139.767,0,0,0,0,100,0),
(497640,8,2377.94,-2016.44,131.693,0,0,0,0,100,0),
(497640,9,2374.06,-2001.21,130.562,0,0,0,0,100,0),
(497640,10,2372.28,-1982.43,128.278,0,0,0,0,100,0),
(497640,11,2376.51,-1969.57,121.839,0,0,0,0,100,0),
(497640,12,2375.11,-1950.14,112.396,0,0,0,0,100,0),
(497640,13,2372.51,-1931.98,107.089,0,0,0,0,100,0),
(497640,14,2354.68,-1920.08,102.883,0,0,0,0,100,0),
(497640,15,2342.78,-1908.55,98.6772,0,0,0,0,100,0),
(497640,16,2325.45,-1898.75,93.837,0,0,0,0,100,0),
(497640,17,2318.2,-1889.93,91.6167,0,0,0,0,100,0),
(497640,18,2318.05,-1873.37,90.6731,0,0,0,0,100,0),
(497640,19,2309.98,-1871.07,90.6959,0,0,0,0,100,0),
(497640,20,2298.41,-1885.31,90.1141,0,0,0,0,100,0),
(497640,21,2314.91,-1892.48,91.7336,0,0,0,0,100,0),
(497640,22,2337.46,-1909.88,97.6478,0,0,0,0,100,0),
(497640,23,2359.56,-1929.53,105.619,0,0,0,0,100,0),
(497640,24,2370,-1937.54,108.374,0,0,0,0,100,0),
(497640,25,2371.99,-1954.59,113.667,0,0,0,0,100,0),
(497640,26,2383.27,-1967.29,121.956,0,0,0,0,100,0),
(497640,27,2387.67,-1976.81,127.84,0,0,0,0,100,0),
(497640,28,2395.82,-1989.83,129.256,0,0,0,0,100,0),
(497640,29,2393.73,-2006.51,128.204,0,0,0,0,100,0),
(497640,30,2382.32,-2013.94,130.22,0,0,0,0,100,0),
(497640,31,2374.71,-2025.51,135.709,0,0,0,0,100,0),
(497640,32,2367.91,-2032.53,142.677,0,0,0,0,100,0);