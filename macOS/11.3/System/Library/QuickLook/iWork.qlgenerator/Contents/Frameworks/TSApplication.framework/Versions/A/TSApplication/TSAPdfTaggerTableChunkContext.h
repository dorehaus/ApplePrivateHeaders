/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSAPdfTaggerContext.h>

@class TSTTableRep;

@interface TSAPdfTaggerTableChunkContext : TSAPdfTaggerContext {

	char _multispace;
	char _firstSpace;
	TSTTableRep* _tableChunkRep;

}

@property (nonatomic,readonly) TSTTableRep * tableChunkRep;              //@synthesize tableChunkRep=_tableChunkRep - In the implementation block
@property (nonatomic,readonly) char multispace;                          //@synthesize multispace=_multispace - In the implementation block
@property (assign,nonatomic) char firstSpace;                            //@synthesize firstSpace=_firstSpace - In the implementation block
-(id)initWithStateOfTagger:(id)arg1 tableChunk:(id)arg2 ;
-(TSTTableRep *)tableChunkRep;
-(char)multispace;
-(char)firstSpace;
-(void)setFirstSpace:(char)arg1 ;
@end

