/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@interface IKSlideshowDebugItem : NSView {

	unsigned long long _index;
	unsigned long long _flags;
	char _imageLoaded;
	char _thumbnailLoaded;
	char _dataSourceItemIsCached;
	char _current;

}

@property (assign) unsigned long long index;                           //@synthesize index=_index - In the implementation block
@property (assign) unsigned long long flags;                           //@synthesize flags=_flags - In the implementation block
@property (assign) char imageLoaded;                                   //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (assign) char thumbnailLoaded;                               //@synthesize thumbnailLoaded=_thumbnailLoaded - In the implementation block
@property (assign) char current;                                       //@synthesize current=_current - In the implementation block
@property (assign,nonatomic) char dataSourceItemIsCached;              //@synthesize dataSourceItemIsCached=_dataSourceItemIsCached - In the implementation block
-(void)setAutoPlaying:(char)arg1 ;
-(char)autoPlaying;
-(char)imageLoaded;
-(char)thumbnailLoaded;
-(char)dataSourceItemIsCached;
-(id)initWithIndex:(unsigned long long)arg1 slideshow:(id)arg2 col:(int)arg3 row:(int)arg4 ;
-(void)setImageLoaded:(char)arg1 ;
-(void)setThumbnailLoaded:(char)arg1 ;
-(void)setdataSourceItemIsCached:(char)arg1 ;
-(void)setDataSourceItemIsCached:(char)arg1 ;
-(void)finalize;
-(unsigned long long)flags;
-(void)dealloc;
-(void)invalidate;
-(void)cleanup;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setCurrent:(char)arg1 ;
-(char)current;
-(void)setFlags:(unsigned long long)arg1 ;
-(char)isOpaque;
-(void)drawRect:(CGRect)arg1 ;
-(void)unbindAll;
@end
