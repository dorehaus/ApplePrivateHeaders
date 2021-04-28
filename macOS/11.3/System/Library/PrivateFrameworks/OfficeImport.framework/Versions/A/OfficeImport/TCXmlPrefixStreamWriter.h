/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/TCXmlStreamWriter.h>

@class NSMutableArray;

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {

	NSMutableArray* mStateStack;

}
-(void)dealloc;
-(id)currentState;
-(char)addElement:(id)arg1 ;
-(id)pushStateWithElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(void)popState;
-(id)pushState;
-(id)currentElementPrefix;
-(char)startElement:(id)arg1 ;
-(id)currentAttributePrefix;
-(char)writeAttribute:(id)arg1 content:(id)arg2 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 content:(id)arg3 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 boolContent:(char)arg3 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 intContent:(long long)arg3 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 enumContent:(int)arg3 map:(id)arg4 ;
-(char)writeOneAttributeElementWithName:(id)arg1 attributeName:(id)arg2 doubleContent:(double)arg3 ;
-(void)pushElementPrefix:(id)arg1 attributePrefix:(id)arg2 ;
-(id)pushStateWithSharedPrefix:(id)arg1 ;
-(char)writeAttribute:(id)arg1 boolContent:(char)arg2 ;
-(char)writeAttribute:(id)arg1 intContent:(long long)arg2 ;
-(char)writeAttribute:(id)arg1 unsignedLongContent:(unsigned long long)arg2 ;
-(char)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(char)writeAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 content:(id)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 boolContent:(char)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 intContent:(long long)arg2 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(char)writeValAttributeOnlyElementWithName:(id)arg1 doubleContent:(double)arg2 ;
-(id)initWithTextWriterProvider:(id)arg1 ;
-(char)startOAElement:(id)arg1 ;
-(char)writeOAAttribute:(id)arg1 content:(id)arg2 ;
-(void)pushOAState;
-(char)writeOAAttribute:(id)arg1 boolContent:(char)arg2 ;
-(char)writeOAAttribute:(id)arg1 intContent:(long long)arg2 ;
-(char)writeOAAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(char)writeOAAttribute:(id)arg1 doubleContent:(double)arg2 ;
-(char)writeIndexAttribute:(id)arg1 intContent:(unsigned long long)arg2 ;
-(void)writeTextString:(id)arg1 forElement:(id)arg2 ;
@end

