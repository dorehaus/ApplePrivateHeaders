/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSArray;

@interface _NSLexiconLemma : NSObject {

	NSString* _name;
	NSArray* _words;
	SCD_Struct_NS34 _attributes;

}

@property (nonatomic,readonly) SCD_Struct_NS34 attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * words;                    //@synthesize words=_words - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(SCD_Struct_NS34)attributes;
-(NSArray *)words;
-(id)replacementWordsForToken:(id)arg1 addingAttributes:(SCD_Struct_NS33)arg2 ;
@end

