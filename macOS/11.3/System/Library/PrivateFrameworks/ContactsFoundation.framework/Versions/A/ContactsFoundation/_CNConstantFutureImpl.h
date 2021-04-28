/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFutureImpl.h>

@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl> {

	id _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)cancel;
-(char)isCancelled;
-(char)isFinished;
-(id)initWithResult:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)updateDescriptionWithBuilder:(id)arg1 ;
@end
