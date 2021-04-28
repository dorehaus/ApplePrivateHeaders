/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPRMListItem : NSObject {

	CGPDFNode* _paragraphs;
	unsigned long long _count;
	unsigned long long _pos;

}

@property (readonly) CGPDFNode* paragraphNodes;              //@synthesize paragraphs=_paragraphs - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(void)dealloc;
-(id)initWithCount:(unsigned long long)arg1 ;
-(CGRect)bounds;
-(CGPDFPageRef)page;
-(void)addParagraph:(CGPDFNodeRef)arg1 ;
-(CGPDFNode*)paragraphNodes;
@end

