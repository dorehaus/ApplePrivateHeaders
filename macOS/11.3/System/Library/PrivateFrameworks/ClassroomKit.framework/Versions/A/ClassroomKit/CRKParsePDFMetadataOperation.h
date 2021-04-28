/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATOperation.h>

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation {

	char _parseImage;
	CRKBook* _book;
	NSString* _filePath;

}

@property (nonatomic,readonly) CRKBook * book;                   //@synthesize book=_book - In the implementation block
@property (nonatomic,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) char parseImage;                  //@synthesize parseImage=_parseImage - In the implementation block
-(NSString *)filePath;
-(void)main;
-(id)fileName;
-(CRKBook *)book;
-(id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(char)arg3 ;
-(void)updateTitleWithDictionaryRef:(CGPDFDictionaryRef)arg1 ;
-(char)parseImage;
-(id)titleFromDictionaryRef:(CGPDFDictionaryRef)arg1 ;
@end
