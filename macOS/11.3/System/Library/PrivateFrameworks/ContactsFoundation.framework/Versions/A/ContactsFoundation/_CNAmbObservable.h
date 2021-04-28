/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/_CNAmbObserverDelegate.h>

@class NSArray, NSMapTable, NSString;

@interface _CNAmbObservable : CNObservable <_CNAmbObserverDelegate> {

	NSArray* _observables;
	NSMapTable* _tokensByObserver;
	char _winnerDeclared;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservables:(id)arg1 ;
-(void)cancelRemainingObservables;
-(void)observerWillRelayEvent:(id)arg1 ;
@end

