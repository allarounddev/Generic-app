//
//  UserCell.h
//  PeggSite
//
//  Created by Victor Belenko  on 7/9/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserCell : UITableViewCell

@property (nonatomic, strong) User *user;
@property (nonatomic, weak) IBOutlet AvatarView *avatarView;
@property (nonatomic, weak) IBOutlet UILabel *userName;

@end
