/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol _CNObservableSkipUntilSignalObserverDelegate;
@class NSString;

@interface _CNObservableSkipUntilSignalObserver : NSObject <CNObserver> {

	id<_CNObservableSkipUntilSignalObserverDelegate> _delegate;

}

@property (__weak,readonly) id<_CNObservableSkipUntilSignalObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_CNObservableSkipUntilSignalObserverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg1 ;
@end

