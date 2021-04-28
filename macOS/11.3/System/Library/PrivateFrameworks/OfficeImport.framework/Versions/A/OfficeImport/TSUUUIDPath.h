/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSUUID, NSString;

@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration> {

	NSArray* _uuids;

}

@property (nonatomic,readonly) NSArray * uuids;                        //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,readonly) NSUUID * lastUUID; 
@property (nonatomic,readonly) NSString * UUIDPathString; 
+(id)lastUUIDFromUUIDPathString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithArray:(id)arg1 ;
-(NSString *)UUIDPathString;
-(id)initWithUUIDPathString:(id)arg1 ;
-(id)UUIDPathByAppendingUUID:(id)arg1 ;
-(NSUUID *)lastUUID;
-(NSArray *)uuids;
@end

