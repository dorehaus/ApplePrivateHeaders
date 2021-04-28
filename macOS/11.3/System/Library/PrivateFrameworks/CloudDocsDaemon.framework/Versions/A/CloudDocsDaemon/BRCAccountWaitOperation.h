/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_source;
@class NSObject, CKContainer, NSString;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {

	NSObject*<OS_dispatch_source> _source;
	CKContainer* _ckContainer;
	long long _lastAccountStatus;
	char _resumed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(void)cancel;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(void)_accountChangeHandler;
-(id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2 ;
-(void)_accountDidChange;
-(id)initWithCKContainer:(id)arg1 ;
@end
