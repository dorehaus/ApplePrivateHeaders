/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDMediaLayout.h>

@class TSDMovieInfo;

@interface TSDAudioLayout : TSDMediaLayout

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
+(CGSize)scaledAudioSize;
-(id)initWithInfo:(id)arg1 ;
-(int)wrapType;
-(TSDMovieInfo *)movieInfo;
-(id)layoutGeometryFromInfo;
-(char)shouldDisplayGuides;
-(char)allowsConnections;
-(char)supportsRotation;
-(CGRect)alignmentFrame;
-(char)resizeMayChangeAspectRatio;
-(char)canAspectRatioLockBeChangedByUser;
-(id)visibleGeometries;
-(char)supportsFlipping;
-(CGRect)computeAlignmentFrameInRoot:(char)arg1 ;
-(CGRect)frameForCullingWithBaseFrame:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
@end
