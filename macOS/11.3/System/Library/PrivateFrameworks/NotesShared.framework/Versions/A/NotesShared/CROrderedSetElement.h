/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CREquatable.h>

@protocol CRDataTypeCRCoding;
@class CRRegisterLatest, NSString;

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable> {

	id<CRDataType><CRCoding> _value;
	CRRegisterLatest* _index;

}

@property (nonatomic,retain) id<CRDataType><CRCoding> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) CRRegisterLatest * index;                    //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)temporaryElementWithValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<CRDataType><CRCoding>)value;
-(CRRegisterLatest *)index;
-(void)setIndex:(CRRegisterLatest *)arg1 ;
-(void)setValue:(id<CRDataType><CRCoding>)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)tombstone;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)encodeIntoProtobufSetElement:(Dictionary_Element*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufSetElement:(const Dictionary_Element*)arg1 decoder:(id)arg2 ;
@end
