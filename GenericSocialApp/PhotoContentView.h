//
//  PhotoContentView.h
//  PeggSite
//
//  Created by Victor Belenko  on 6/13/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@class GalleryThumbnailView;
@interface PhotoContentView : UIView

@property (nonatomic, weak) IBOutlet UIImageView *photoImageView;
@property (nonatomic, weak) IBOutlet PeggTextView *captionTextView;
@property (nonatomic, weak) IBOutlet GalleryThumbnailView *galleryThumbnailView;

@end
