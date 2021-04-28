/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/Versions/A/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableString;

@interface CPMLSchema : NSObject {

	NSMutableArray* schema;
	NSMutableString* schemaHeader;
	NSMutableString* schemaHeaderWithType;
	NSMutableArray* attribute;
	NSMutableArray* schemaHDef;
	NSMutableArray* nsRemapTable;
	NSMutableArray* _categoricalDataList;
	NSMutableArray* _replaceMissingValue;
	NSMutableArray* _matchReplaceValue;
	int yColumnPosition;
	NSMutableArray* availableOptions;
	NSMutableArray* _indexColumnList;

}

@property (nonatomic,readonly) NSMutableArray * attribute; 
@property (nonatomic,readonly) NSMutableArray * indexColumnList;                    //@synthesize indexColumnList=_indexColumnList - In the implementation block
@property (nonatomic,readonly) NSMutableString * schemaHeader; 
@property (nonatomic,readonly) NSMutableString * schemaHeaderWithType; 
@property (nonatomic,readonly) NSMutableArray * nsRemapTable; 
@property (nonatomic,readonly) NSMutableArray * availableOptions; 
-(id)init:(id)arg1 ;
-(NSMutableArray *)attribute;
-(id)initWithPlist:(id)arg1 ;
-(NSMutableArray *)availableOptions;
-(unsigned long long)getTotalAttributes;
-(id)getUserDefinedCategoricalData:(unsigned long long)arg1 ;
-(int)getYColumnPosition;
-(int)getSchemaType:(unsigned long long)arg1 ;
-(id)getColumnName:(unsigned long long)arg1 ;
-(int)getVectorContent:(unsigned long long)arg1 ;
-(NSMutableString *)schemaHeaderWithType;
-(NSMutableArray *)indexColumnList;
-(char)matchSubstituteValue:(unsigned long long)arg1 theValue:(id)arg2 ;
-(id)getSubstituteValue:(unsigned long long)arg1 ;
-(char)isStringType:(unsigned long long)arg1 ;
-(char)isVectorType:(unsigned long long)arg1 ;
-(int)getColumnPosition:(id)arg1 ;
-(char)isRealType:(unsigned long long)arg1 ;
-(char)isIntType:(unsigned long long)arg1 ;
-(NSMutableArray *)nsRemapTable;
-(unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)arg1 ;
-(char)isColumnContinous:(unsigned)arg1 ;
-(char)isNumType:(unsigned long long)arg1 ;
-(char)hasOptions:(unsigned long long)arg1 ;
-(NSMutableString *)schemaHeader;
@end

