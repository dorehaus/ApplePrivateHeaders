/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKShareMetadata, NSString;

@interface BRCAcceptShareOperation : _BRCOperation <BRCOperationSubclass> {

	CKShareMetadata* _shareMetadata;
	/*^block*/id _acceptShareCompletionBlock;

}

@property (nonatomic,copy) id acceptShareCompletionBlock;              //@synthesize acceptShareCompletionBlock=_acceptShareCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryForError:(id)arg1 ;
-(id)initWithShareMetadata:(id)arg1 syncContext:(id)arg2 ;
-(void)setAcceptShareCompletionBlock:(id)arg1 ;
-(id)acceptShareCompletionBlock;
@end

