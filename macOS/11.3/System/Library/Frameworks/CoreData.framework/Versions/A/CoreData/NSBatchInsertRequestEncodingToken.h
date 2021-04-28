/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSInputStream;

@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding> {

	NSString* _entityName;
	NSArray* _objectsToInsert;
	NSInputStream* _inputStream;
	unsigned long long _resultType;
	char _secure;

}

@property (nonatomic,retain,readonly) NSString * entityName;                    //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,retain,readonly) NSArray * objectsToInsert;                //@synthesize objectsToInsert=_objectsToInsert - In the implementation block
@property (nonatomic,retain,readonly) NSInputStream * inputStream;              //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                   //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) char secure;                                     //@synthesize secure=_secure - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)objectsToInsert;
-(id)initForRequest:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)entityName;
-(unsigned long long)resultType;
-(NSInputStream *)inputStream;
-(char)secure;
@end

