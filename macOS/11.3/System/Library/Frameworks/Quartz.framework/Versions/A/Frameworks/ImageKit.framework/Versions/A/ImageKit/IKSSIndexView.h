/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class IKSSIndexHandler;

@interface IKSSIndexView : NSView {

	IKSSIndexHandler* _indexHandler;

}

@property (assign) IKSSIndexHandler * indexHandler;              //@synthesize indexHandler=_indexHandler - In the implementation block
-(void)setIndexHandler:(IKSSIndexHandler *)arg1 ;
-(IKSSIndexHandler *)indexHandler;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
@end

