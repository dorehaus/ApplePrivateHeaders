/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSAutounbinder, NSDictionary, NSArray, NSStoryboard, NSWindowController, NSViewController;

@interface NSWindowControllerMoreIVars : NSObject {

	NSAutounbinder* autounbinder;
	long long cascadeNumber;
	CGPoint cascadePoint;
	NSDictionary* _externalObjectEntryTableForWindowLoading;
	NSArray* _topLevelObjectsToKeepAliveFromStoryboard;
	NSArray* _segueTemplates;
	NSStoryboard* _storyboard;
	NSDictionary* _segueDestinationOptions;
	NSWindowController* _retainedSelf;
	NSViewController* _contentViewController;

}

@property (retain) NSDictionary * externalObjectEntryTableForWindowLoading;              //@synthesize externalObjectEntryTableForWindowLoading=_externalObjectEntryTableForWindowLoading - In the implementation block
@property (retain) NSArray * topLevelObjectsToKeepAliveFromStoryboard;                   //@synthesize topLevelObjectsToKeepAliveFromStoryboard=_topLevelObjectsToKeepAliveFromStoryboard - In the implementation block
@property (retain) NSArray * segueTemplates;                                             //@synthesize segueTemplates=_segueTemplates - In the implementation block
@property (retain) NSStoryboard * storyboard;                                            //@synthesize storyboard=_storyboard - In the implementation block
@property (retain) NSDictionary * segueDestinationOptions;                               //@synthesize segueDestinationOptions=_segueDestinationOptions - In the implementation block
@property (retain) NSViewController * contentViewController;                             //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)dealloc;
-(void)setContentViewController:(NSViewController *)arg1 ;
-(NSStoryboard *)storyboard;
-(void)setStoryboard:(NSStoryboard *)arg1 ;
-(NSViewController *)contentViewController;
-(void)setSegueTemplates:(NSArray *)arg1 ;
-(void)setTopLevelObjectsToKeepAliveFromStoryboard:(NSArray *)arg1 ;
-(void)setSegueDestinationOptions:(NSDictionary *)arg1 ;
-(NSArray *)segueTemplates;
-(NSArray *)topLevelObjectsToKeepAliveFromStoryboard;
-(NSDictionary *)segueDestinationOptions;
-(NSDictionary *)externalObjectEntryTableForWindowLoading;
-(void)setExternalObjectEntryTableForWindowLoading:(NSDictionary *)arg1 ;
@end

