/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface _CopyfileCallbackCtx : NSObject {

	char _doArchive;
	char _doUnarchive;
	NSProgress* _progress;
	unsigned long long _generationSize;

}

@property (assign,nonatomic) char doArchive;                                 //@synthesize doArchive=_doArchive - In the implementation block
@property (assign,nonatomic) char doUnarchive;                               //@synthesize doUnarchive=_doUnarchive - In the implementation block
@property (assign,nonatomic) unsigned long long generationSize;              //@synthesize generationSize=_generationSize - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
-(NSProgress *)progress;
-(id)initWithPath:(const char*)arg1 error:(id*)arg2 ;
-(void)setDoArchive:(char)arg1 ;
-(void)setDoUnarchive:(char)arg1 ;
-(unsigned long long)generationSize;
-(void)setGenerationSize:(unsigned long long)arg1 ;
-(char)doArchive;
-(char)doUnarchive;
@end

