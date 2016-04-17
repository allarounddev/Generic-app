//
//  PhotoViewCell.h
//  PeggSite
//
//  Created by Victor Belenko  on 6/13/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <UIKit/UIKit.h>

@class PhotoView;
@interface PhotoViewCell : UICollectionViewCell

@property (nonatomic, weak) IBOutlet PhotoView *photoView;
@property (nonatomic, strong) ALAsset *asset;

@end
