/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVTouchBarTrackView.h>

@class NSMutableArray;

@interface AVTouchBarVideoTrackView : AVTouchBarTrackView {

	NSMutableArray* _thumbnailsAndFilteredImages;
	char _allPreviewLayersHaveContent;

}
+(double)thumbnailGenerationToleranceForNumberOfThumbnails:(unsigned long long)arg1 contentDuration:(double)arg2 ;
-(CGSize)previewLayerSize;
-(long long)numberOfPreviewLayersForWidth:(double)arg1 ;
-(CGPoint)positionForPreviewLayerWithIndex:(long long)arg1 ;
-(void)updatePreviewLayerContent;
-(id)_filterImage:(id)arg1 size:(CGSize)arg2 ;
-(id)makePreviewLayer;
-(char)allPreviewLayersHaveContent;
-(CGSize)sizeForPreviewLayerWithIndex:(long long)arg1 ;
-(void)addThumbnails:(id)arg1 ;
-(void)removeAllThumbnails;
-(double)thumbnailGenerationToleranceForCurrentSize;
-(id)thumbnailForTime:(double)arg1 ;
-(void)updatePreviewLayerContentForThumbnailsAndFilteredImages:(id)arg1 ;
@end

