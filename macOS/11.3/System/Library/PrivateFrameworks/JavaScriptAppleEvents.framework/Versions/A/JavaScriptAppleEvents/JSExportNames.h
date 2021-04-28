/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JavaScriptAppleEvents.framework/Versions/A/JavaScriptAppleEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface JSExportNames : NSObject {

	NSMapTable* _setterSelectorTables;
	NSMapTable* _getterSelectorTables;
	NSMapTable* _methodSelectorTables;

}

@property (retain) NSMapTable * setterSelectorTables;              //@synthesize setterSelectorTables=_setterSelectorTables - In the implementation block
@property (retain) NSMapTable * getterSelectorTables;              //@synthesize getterSelectorTables=_getterSelectorTables - In the implementation block
@property (retain) NSMapTable * methodSelectorTables;              //@synthesize methodSelectorTables=_methodSelectorTables - In the implementation block
+(id)defaultSetterNameForPropertyName:(id)arg1 ;
-(id)init;
-(void)generatePropertySelectorTablesForClass:(Class)arg1 ;
-(void)generateMethodSelectorTablesForClass:(Class)arg1 ;
-(void)generatePropertySelectorTablesForProtocol:(id)arg1 ;
-(void)generateMethodSelectorTablesForProtocol:(id)arg1 ;
-(id)setterSelectorTableForClass:(Class)arg1 ;
-(id)getterSelectorTableForClass:(Class)arg1 ;
-(id)methodSelectorTableForClass:(Class)arg1 ;
-(id)setterSelectorTableForProtocol:(id)arg1 ;
-(SEL)methodSelectorForName:(id)arg1 protocol:(id)arg2 ;
-(id)getterSelectorTableForProtocol:(id)arg1 ;
-(id)methodSelectorTableForProtocol:(id)arg1 ;
-(SEL)setterSelectorForName:(id)arg1 class:(Class)arg2 ;
-(SEL)getterSelectorForName:(id)arg1 class:(Class)arg2 ;
-(SEL)methodSelectorForName:(id)arg1 class:(Class)arg2 ;
-(SEL)setterSelectorForName:(id)arg1 protocol:(id)arg2 ;
-(SEL)getterSelectorForName:(id)arg1 protocol:(id)arg2 ;
-(NSMapTable *)setterSelectorTables;
-(void)setSetterSelectorTables:(NSMapTable *)arg1 ;
-(NSMapTable *)getterSelectorTables;
-(void)setGetterSelectorTables:(NSMapTable *)arg1 ;
-(NSMapTable *)methodSelectorTables;
-(void)setMethodSelectorTables:(NSMapTable *)arg1 ;
@end

