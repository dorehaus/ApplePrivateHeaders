/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface EFSQLPropertyMapper : NSObject {

	NSMutableDictionary* _lookupValues;

}

@property (nonatomic,retain) NSMutableDictionary * lookupValues;              //@synthesize lookupValues=_lookupValues - In the implementation block
+(id)emptyPropertyMapper;
-(id)init;
-(id)merge:(id)arg1 ;
-(void)setLookupValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lookupValues;
-(id)_findAllProtocolsOfClass:(Class)arg1 withProperty:(SEL)arg2 ;
-(void)registerColumn:(id)arg1 forProtocol:(id)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(id)valueForLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
-(id)valueForLookupKey:(id)arg1 protocol:(id)arg2 property:(SEL)arg3 ;
-(void)_registerQualifiedColumns:(id)arg1 lookupKeys:(id)arg2 forClass:(Class)arg3 property:(SEL)arg4 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 ;
-(id)_qualifiedColumnExpressionsForColumn:(id)arg1 availableTables:(id)arg2 replaceNULL:(char)arg3 ;
-(void)registerColumn:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 lookupKeys:(id)arg4 ;
-(id)columnForClass:(Class)arg1 property:(SEL)arg2 ;
-(id)columnForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)columnForLookupKey:(id)arg1 value:(id)arg2 ;
-(void)registerColumnNames:(id)arg1 table:(id)arg2 forClass:(Class)arg3 property:(SEL)arg4 ;
-(void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 forClass:(Class)arg4 property:(SEL)arg5 ;
-(id)columnNameForClass:(Class)arg1 property:(SEL)arg2 ;
-(id)columnNameForProtocol:(id)arg1 property:(SEL)arg2 ;
-(id)columnNameForLookupKey:(id)arg1 value:(id)arg2 ;
-(id)qualifiedColumnExpressionForLookupKey:(id)arg1 value:(id)arg2 availableTables:(id)arg3 ;
-(id)qualifiedColumnExpressionForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(id)qualifiedColumnExpressionsForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(id)qualifiedColumnNamesForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3 ;
-(char)hasLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3 ;
@end

