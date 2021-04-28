/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFNdefMessage.h>

@class NSArray, NSMutableArray, NSString;

@interface NFNdefMessageInternal : NSObject <NSSecureCoding, NFNdefMessage> {

	NSMutableArray* _records;

}

@property (nonatomic,readonly) NSArray * records; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)decodeFromNDEFMessage:(id)arg1 ;
+(id)dataFromNDEFMessage:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
-(id)asData;
-(id)decode;
-(NSArray *)records;
-(id)initWithNDEFMessage:(id)arg1 ;
-(void)addRecordArray:(id)arg1 ;
@end
