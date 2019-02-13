//
//  CropContentView.h
//  PeggSite
//
//  Created by Victor Belenko  on 6/18/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CropScrollView : UIScrollView
<UIScrollViewDelegate>

@property (nonatomic, strong) UIImageView *scrollImageView;

- (void)displayImage:(UIImage *)image;

@end
