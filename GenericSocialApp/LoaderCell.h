//
//  LoaderCell.h
//  PeggSite
//
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoaderCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

-(void)startAnimating;

@end
