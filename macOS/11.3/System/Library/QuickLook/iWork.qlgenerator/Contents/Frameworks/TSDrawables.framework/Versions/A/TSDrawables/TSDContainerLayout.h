/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDLayout.h>

@interface TSDContainerLayout : TSDLayout

@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
-(id)initWithInfo:(id)arg1 ;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(void)processChangedProperty:(int)arg1 ;
-(id)childInfosForChildLayouts;
-(CGRect)baseFrameForFrameForCullingWithAdditionalTransform:(CGAffineTransform)arg1 ;
@end

