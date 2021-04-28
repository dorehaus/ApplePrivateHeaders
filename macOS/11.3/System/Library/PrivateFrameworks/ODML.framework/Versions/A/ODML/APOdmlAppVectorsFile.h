/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/Versions/A/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ODML/ODML-Structs.h>
@class NSString;

@interface APOdmlAppVectorsFile : NSObject {

	unsigned _nextIndex;
	unsigned long long _numberOfVectors;
	NSString* _vectorVersion;
	_sFILE* _file;

}

@property (assign,nonatomic) unsigned long long numberOfVectors;              //@synthesize numberOfVectors=_numberOfVectors - In the implementation block
@property (nonatomic,copy) NSString * vectorVersion;                          //@synthesize vectorVersion=_vectorVersion - In the implementation block
@property (assign,nonatomic) _sFILE* file;                                    //@synthesize file=_file - In the implementation block
@property (assign,nonatomic) unsigned nextIndex;                              //@synthesize nextIndex=_nextIndex - In the implementation block
-(unsigned long long)numberOfVectors;
-(NSString *)vectorVersion;
-(id)initForReadingContentsOfURL:(id)arg1 version:(id)arg2 ;
-(void)setNumberOfVectors:(unsigned long long)arg1 ;
-(void)setVectorVersion:(NSString *)arg1 ;
-(void)setNextIndex:(unsigned)arg1 ;
-(void)dealloc;
-(_sFILE*)file;
-(void)setFile:(_sFILE*)arg1 ;
-(unsigned)nextIndex;
-(id)nextVector;
@end

