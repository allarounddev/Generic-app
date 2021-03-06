//
//  FacebookFriendCell.h
//  PeggSite
//
//  Created by Victor Belenko  on 3/25/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@class FacebookUser, TwitterUser;
@interface ShareFriendCell : UITableViewCell

@property (nonatomic, strong) FacebookUser *user;
@property (nonatomic, weak) IBOutlet PeggLabel *friendLabel;
@property (nonatomic, weak) IBOutlet FBProfilePictureView *pictureView;
@property (nonatomic, strong) TwitterUser *twitterUser;
@property (nonatomic, weak) IBOutlet UIImageView *twitterImageView;

@end
