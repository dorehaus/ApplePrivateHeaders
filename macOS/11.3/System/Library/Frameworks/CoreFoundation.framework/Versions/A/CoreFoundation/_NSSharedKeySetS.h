/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _NSSharedKeySetS : NSObject <NSCopying> {

	char* _g;
	unsigned char _select;
	void* _rankTable;
	double _c;
	unsigned _M;
	unsigned _factor;
	unsigned _numKey;
	unsigned* _seeds;
	unsigned short* _keys1[1];
	unsigned short* _keys2[2];
	unsigned short* _keys3[3];
	unsigned char* _ckeys[3];
	_NSSharedKeySetS* _subSharedKeySet;
	unsigned _keyLen;
	unsigned _type;

}

@property (g) char* g;                                              //@synthesize g=_g - In the implementation block
@property (assign) unsigned char select;                            //@synthesize select=_select - In the implementation block
@property (assign) void* rankTable;                                 //@synthesize rankTable=_rankTable - In the implementation block
@property (c) double c;                                             //@synthesize c=_c - In the implementation block
@property (M) unsigned M;                                           //@synthesize M=_M - In the implementation block
@property (assign) unsigned factor;                                 //@synthesize factor=_factor - In the implementation block
@property (assign) unsigned numKey;                                 //@synthesize numKey=_numKey - In the implementation block
@property (assign) unsigned* seeds;                                 //@synthesize seeds=_seeds - In the implementation block
@property (assign) unsigned short* keys1[1];                        //@synthesize keys1=_keys1 - In the implementation block
@property (assign) unsigned short* keys2[2];                        //@synthesize keys2=_keys2 - In the implementation block
@property (assign) unsigned short* keys3[3];                        //@synthesize keys3=_keys3 - In the implementation block
@property (assign) unsigned char* ckeys[3];                         //@synthesize ckeys=_ckeys - In the implementation block
@property (assign) unsigned keyLen;                                 //@synthesize keyLen=_keyLen - In the implementation block
@property (assign) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (retain) _NSSharedKeySetS * subSharedKeySet;              //@synthesize subSharedKeySet=_subSharedKeySet - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned)count;
-(void)setSelect:(unsigned char)arg1 ;
-(void)setC:(double)arg1 ;
-(void)setM:(unsigned)arg1 ;
-(void)setFactor:(unsigned)arg1 ;
-(void)setNumKey:(unsigned)arg1 ;
-(void)setSeeds:(unsigned*)arg1 ;
-(void)setG:(char*)arg1 ;
-(void)setRankTable:(void*)arg1 ;
-(void)setKeys2:(unsigned short*)arg1 ;
-(void)setKeyLen:(unsigned)arg1 ;
-(void)setSubSharedKeySet:(_NSSharedKeySetS *)arg1 ;
-(char)isEmpty;
-(void)setCkeys:(unsigned char*)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)allKeys;
-(void)setKeys1:(unsigned short*)arg1 ;
-(id)initWithKeys:(void*)arg1 keyLenghtInBytes:(unsigned)arg2 count:(unsigned)arg3 type:(unsigned)arg4 ;
-(unsigned short*)keyAtIndex:(unsigned long long)arg1 ;
-(char*)bytesAtIndex:(unsigned long long)arg1 ;
-(unsigned)keyLen;
-(unsigned)keySetCount;
-(unsigned)maximumIndex;
-(unsigned long long)indexForKey:(unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)indexForBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(char*)g;
-(unsigned char)select;
-(void*)rankTable;
-(double)c;
-(unsigned)M;
-(unsigned)factor;
-(unsigned)numKey;
-(unsigned*)seeds;
-(unsigned short*)keys1;
-(unsigned short*)keys2;
-(unsigned short*)keys3;
-(void)setKeys3:(unsigned short*)arg1 ;
-(unsigned char*)ckeys;
-(_NSSharedKeySetS *)subSharedKeySet;
@end

