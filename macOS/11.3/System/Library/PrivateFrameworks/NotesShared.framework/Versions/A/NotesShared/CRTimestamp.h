/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CREquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, NSString;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding> {

	NSUUID* _replica;
	long long _counter;

}

@property (nonatomic,retain) NSUUID * replica;                      //@synthesize replica=_replica - In the implementation block
@property (assign,nonatomic) long long counter;                     //@synthesize counter=_counter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(long long)counter;
-(void)setDocument:(id)arg1 ;
-(id)shortDescription;
-(id)tombstone;
-(void)mergeWith:(id)arg1 ;
-(void)setCounter:(long long)arg1 ;
-(NSUUID *)replica;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)encodeIntoProtobufTimestamp:(Timestamp*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufTimestamp:(const Timestamp*)arg1 decoder:(id)arg2 ;
-(void)setReplica:(NSUUID *)arg1 ;
-(id)initWithReplica:(id)arg1 andCounter:(long long)arg2 ;
-(char)isEqualToTimestamp:(id)arg1 ;
-(id)nextTimestampForReplica:(id)arg1 ;
-(id)nextTimestamp;
-(id)earlierTimestamp:(id)arg1 ;
-(id)laterTimestamp:(id)arg1 ;
@end

