/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString, NSArray;

@interface NSNetService : NSObject {

	id _netService;
	id _delegate;
	id _reserved;

}

@property (assign) id<NSNetServiceDelegate> delegate; 
@property (assign) char includesPeerToPeer; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * hostName; 
@property (copy,readonly) NSArray * addresses; 
@property (readonly) long long port; 
+(id)dictionaryFromTXTRecordData:(id)arg1 ;
+(id)dataFromTXTRecordDictionary:(id)arg1 ;
-(char)includesPeerToPeer;
-(id)initWithCFNetService:(CFNetServiceRef)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(NSString *)domain;
-(id<NSNetServiceDelegate>)delegate;
-(void)setDelegate:(id<NSNetServiceDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(NSString *)type;
-(long long)port;
-(void)stop;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(void)resolveWithTimeout:(double)arg1 ;
-(NSArray *)addresses;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4 ;
-(void)publish;
-(NSString *)hostName;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)resolve;
-(id)TXTRecordData;
-(char)getInputStream:(out id*)arg1 outputStream:(out id*)arg2 ;
-(void)setIncludesPeerToPeer:(char)arg1 ;
-(void)publishWithOptions:(unsigned long long)arg1 ;
-(char)setTXTRecordData:(id)arg1 ;
-(void)_setIncludesAWDL:(char)arg1 ;
@end
