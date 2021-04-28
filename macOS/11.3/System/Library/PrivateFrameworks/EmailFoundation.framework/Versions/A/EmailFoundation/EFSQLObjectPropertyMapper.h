/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFObjectPropertyMapper.h>

@protocol EFSQLValueExpressable;
@class NSDictionary, EFSQLTableSchema, EFSQLColumnSchema, NSArray, NSString;

@interface EFSQLObjectPropertyMapper : NSObject <EFObjectPropertyMapper> {

	char _isPlaceholder;
	NSDictionary* _children;
	EFSQLTableSchema* _table;
	EFSQLColumnSchema* _sourceColumn;
	id<EFSQLValueExpressable> _condition;
	NSArray* _additionalColumns;
	id<EFSQLValueExpressable> _bitExpression;

}

@property (nonatomic,readonly) EFSQLTableSchema * table;                             //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) EFSQLColumnSchema * sourceColumn;                     //@synthesize sourceColumn=_sourceColumn - In the implementation block
@property (nonatomic,readonly) id<EFSQLValueExpressable> condition;                  //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) NSArray * additionalColumns;                          //@synthesize additionalColumns=_additionalColumns - In the implementation block
@property (assign,nonatomic) char isPlaceholder;                                     //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,readonly) id<EFSQLValueExpressable> bitExpression;              //@synthesize bitExpression=_bitExpression - In the implementation block
@property (nonatomic,copy) NSDictionary * children;                                  //@synthesize children=_children - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isPlaceholder;
-(id<EFSQLValueExpressable>)condition;
-(NSDictionary *)children;
-(void)setChildren:(NSDictionary *)arg1 ;
-(EFSQLTableSchema *)table;
-(void)setIsPlaceholder:(char)arg1 ;
-(id)childForKey:(id)arg1 ;
-(EFSQLColumnSchema *)sourceColumn;
-(id<EFSQLValueExpressable>)bitExpression;
-(id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4 ;
-(id)initWithColumn:(id)arg1 condition:(id)arg2 ;
-(id)initWithColumn:(id)arg1 condition:(id)arg2 additionalColumns:(id)arg3 bitExpression:(id)arg4 ;
-(id)initWithChildren:(id)arg1 table:(id)arg2 ;
-(id)initWithChildren:(id)arg1 table:(id)arg2 additionalColumns:(id)arg3 ;
-(id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 ;
-(id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 additionalColumns:(id)arg3 ;
-(id)initWithColumn:(id)arg1 ;
-(id)initWithColumn:(id)arg1 bitExpression:(id)arg2 ;
-(id)initWithColumn:(id)arg1 additionalColumns:(id)arg2 ;
-(id)initPlaceholderMapperWithChildren:(id)arg1 ;
-(NSArray *)additionalColumns;
@end

