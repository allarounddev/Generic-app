//
//  PhotoView.h
//  PeggSite
//
//  Created by Victor Belenko  on 6/13/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoView : UIView

@property (nonatomic, weak) IBOutlet UIImageView *photoImageView;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, strong) CAShapeLayer *highlightLayer;

@end
