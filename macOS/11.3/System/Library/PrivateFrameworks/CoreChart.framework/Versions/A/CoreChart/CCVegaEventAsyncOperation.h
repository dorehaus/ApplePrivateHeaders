/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCAsyncOperation.h>

@class CCVegaRenderer, NSString, CCVegaJSMouseEvent;

@interface CCVegaEventAsyncOperation : NSObject <CCAsyncOperation> {

	CCVegaRenderer* _renderer;
	NSString* _type;
	CCVegaJSMouseEvent* _event;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CCVegaJSMouseEvent * event;                    //@synthesize event=_event - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(CCVegaJSMouseEvent *)event;
-(CCVegaRenderer *)renderer;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(void)setEvent:(CCVegaJSMouseEvent *)arg1 ;
-(void)performOperationWithCallback:(/*^block*/id)arg1 ;
@end

