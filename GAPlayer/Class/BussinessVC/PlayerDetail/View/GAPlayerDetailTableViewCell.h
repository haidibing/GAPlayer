//
//  GAPlayerDetailTableViewCell.h
//  GAPlayer
//
//  Created by 宫傲 on 2018/11/21.
//  Copyright © 2018年 宫傲. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GAPlayerDetailTableViewCell : UITableViewCell

@property (nonatomic, assign) BOOL isHideLine;

+ (GAPlayerDetailTableViewCell *)cellWithTableView:(UITableView *)tableView;

- (void)setObject:(id)object;

@end

NS_ASSUME_NONNULL_END
