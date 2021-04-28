/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface NSStoryboardSeguePresentedControllerCenter : NSObject {

	NSMapTable* _registeredControllers;

}

@property (retain) NSMapTable * registeredControllers;              //@synthesize registeredControllers=_registeredControllers - In the implementation block
+(id)defaultCenter;
-(void)dealloc;
-(id)init;
-(id)controllerWithIdentifier:(id)arg1 ;
-(NSMapTable *)registeredControllers;
-(void)registerController:(id)arg1 withOptions:(id)arg2 ;
-(void)unregisterControllerWithOptions:(id)arg1 ;
-(void)setRegisteredControllers:(NSMapTable *)arg1 ;
@end

