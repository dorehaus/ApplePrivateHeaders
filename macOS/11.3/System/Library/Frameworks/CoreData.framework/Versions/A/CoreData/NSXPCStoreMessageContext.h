/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStore, NSCoreDataXPCMessage, NSDictionary, NSError;

@interface NSXPCStoreMessageContext : NSObject {

	NSXPCStore* _store;
	NSCoreDataXPCMessage* _message;
	NSDictionary* _result;
	NSError* _error;

}

@property (nonatomic,readonly) NSCoreDataXPCMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSXPCStore * store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSDictionary * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
-(id)initForMessage:(id)arg1 store:(id)arg2 ;
-(void)dealloc;
-(NSError *)error;
-(NSDictionary *)result;
-(void)setResult:(NSDictionary *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSXPCStore *)store;
-(NSCoreDataXPCMessage *)message;
@end

