/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUHasher : NSObject {

	unsigned long long _currentHash;

}

@property (assign,nonatomic) unsigned long long currentHash;              //@synthesize currentHash=_currentHash - In the implementation block
-(id)init;
-(void)addObject:(id)arg1 ;
-(unsigned long long)hashValue;
-(unsigned long long)currentHash;
-(void)setCurrentHash:(unsigned long long)arg1 ;
-(void)p_appendUnsignedInteger:(unsigned long long)arg1 ;
-(void)addInt:(int)arg1 ;
-(void)addUnsignedInt:(unsigned)arg1 ;
-(void)addBool:(char)arg1 ;
-(void)addInteger:(long long)arg1 ;
-(void)addUnsignedInteger:(unsigned long long)arg1 ;
@end

