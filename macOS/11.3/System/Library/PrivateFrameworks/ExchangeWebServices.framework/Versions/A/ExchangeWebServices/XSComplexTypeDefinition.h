/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/ExchangeWebServices-Structs.h>
#import <ExchangeWebServices/XSDefinition.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray;

@interface XSComplexTypeDefinition : XSDefinition {

	NSMutableArray* _attributes;
	NSMutableArray* _elements;
	NSMutableDictionary* _elementAttributes;
	NSMutableDictionary* _attributeAttributes;
	NSMutableArray* _namespaces;
	NSMutableDictionary* _properties;
	NSString* _contentPropertyName;

}

@property (nonatomic,copy,readonly) NSArray * attributes; 
@property (nonatomic,copy,readonly) NSArray * elements; 
@property (nonatomic,copy,readonly) NSArray * namespaces; 
@property (nonatomic,copy,readonly) NSString * contentPropertyName;              //@synthesize contentPropertyName=_contentPropertyName - In the implementation block
+(id)descriptionForValue:(id)arg1 ;
+(id)_descriptionForValue:(id)arg1 prefix:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)attributes;
-(NSArray *)elements;
-(NSArray *)namespaces;
-(id)propertyForName:(id)arg1 ;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 ;
-(void)addUnboundedElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 ;
-(void)addAttributeWithName:(id)arg1 type:(Class)arg2 ;
-(void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 maxOccurs:(unsigned long long)arg4 minOccurs:(unsigned long long)arg5 ;
-(void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 isSpecifiedKey:(id)arg4 ;
-(void)addNamespaceWithURI:(id)arg1 ;
-(void)addAttributeWithName:(id)arg1 type:(Class)arg2 isSpecifiedKey:(id)arg3 ;
-(void)setContentPropertyName:(id)arg1 type:(Class)arg2 ;
-(void)setIsSpecifiedKey:(id)arg1 onElementWithName:(id)arg2 ;
-(void)addElementWithName:(id)arg1 namespaceURI:(id)arg2 type:(Class)arg3 maxOccurs:(unsigned long long)arg4 minOccurs:(unsigned long long)arg5 flattenMultiValue:(char)arg6 ;
-(id)isSpecifiedKeyForAttributeName:(id)arg1 ;
-(id)isSpecifiedKeyForElementName:(id)arg1 ;
-(char)flattenMultiValueElementWithName:(id)arg1 ;
-(NSString *)contentPropertyName;
-(unsigned long long)maxCountForElementName:(id)arg1 ;
-(void)_setAttribute:(id)arg1 forName:(id)arg2 ofAttributeWithName:(id)arg3 ;
-(id)_attributeForName:(id)arg1 ofAttributeWithName:(id)arg2 ;
-(id)_attributeForName:(id)arg1 ofElementWithName:(id)arg2 ;
-(void)_setAttribute:(id)arg1 forName:(id)arg2 ofElementWithName:(id)arg3 ;
-(void)_setAttribute:(id)arg1 forName:(id)arg2 ofNodeWithName:(id)arg3 attributes:(id)arg4 ;
-(id)_attributeForName:(id)arg1 ofNodeWithName:(id)arg2 attributes:(id)arg3 ;
-(unsigned long long)minCountForElementName:(id)arg1 ;
@end

