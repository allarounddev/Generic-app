//
//  RequestCell.h
//  PeggSite
//
//  Created by Victor Belenko  on 5/23/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FollowCell.h"

@class Request;
@interface RequestCell : FollowCell

@property (nonatomic, strong) Request *request;

- (IBAction)choiceClicked:(id)sender;

@end
