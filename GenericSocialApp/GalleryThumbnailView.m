//
//  GalleryThumbnailView.m
//  PeggSite
//
//  Created by Victor Belenko  on 7/3/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import "GalleryThumbnailView.h"

@implementation GalleryThumbnailView


- (void)drawLayer:(CALayer *)layer inContext:(CGContextRef)ctx
{
    [super drawLayer:layer inContext:ctx];
    
    //self..layer.masksToBounds = YES;
    layer.cornerRadius = 5;
    layer.borderColor = [UIColor whiteColor].CGColor;
    layer.borderWidth = 2.0;
}

// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}


@end
