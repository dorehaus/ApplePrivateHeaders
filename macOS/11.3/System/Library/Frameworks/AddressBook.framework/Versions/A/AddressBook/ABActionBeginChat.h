/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <libobjc.A.dylib/NSSharingServiceDelegate.h>
#import <libobjc.A.dylib/ABActionDelegate.h>

@protocol CNUIShareKitTransitionProvider;
@class NSString;

@interface ABActionBeginChat : NSObject <NSSharingServiceDelegate, ABActionDelegate> {

	NSString* _actionProperty;
	id<CNUIShareKitTransitionProvider> _transitionProvider;

}

@property (retain) id<CNUIShareKitTransitionProvider> transitionProvider;              //@synthesize transitionProvider=_transitionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * actionProperty; 
-(void)dealloc;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(void)setTransitionProvider:(id<CNUIShareKitTransitionProvider>)arg1 ;
-(id<CNUIShareKitTransitionProvider>)transitionProvider;
-(id)unlocalizedTitle;
-(id)titleForPerson:(id)arg1 identifier:(id)arg2 ;
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(NSString *)actionProperty;
-(char)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2 ;
-(void)performActionForPerson:(id)arg1 identifier:(id)arg2 transitionProvider:(id)arg3 ;
-(void)setActionProperty:(NSString *)arg1 ;
@end

