/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSWindow;

@interface NSWindowTabGroup : NSObject {

	NSString* _identifier;

}

@property (copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (getter=isTabBarEnabled) char tabBarEnabled; 
@property (assign) char shouldShowTabBarWithOneItem; 
@property (copy,readonly) NSArray * windows; 
@property (getter=isOverviewVisible) char overviewVisible; 
@property (getter=isTabBarVisible,readonly) char tabBarVisible; 
@property (__weak) NSWindow * selectedWindow; 
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)removeWindow:(id)arg1 ;
-(void)addWindow:(id)arg1 ;
-(void)insertWindow:(id)arg1 atIndex:(long long)arg2 ;
-(id)initWithTabbingIdentifier:(id)arg1 ;
-(char)isTabBarEnabled;
-(void)setTabBarEnabled:(char)arg1 ;
-(id)plusTab;
@end

