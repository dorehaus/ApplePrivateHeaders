/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXMLNode.h>

@class NSString;

@interface NSXMLNamedNode : NSXMLNode {

	NSString* _name;
	NSString* _URI;
	long long _prefixIndex;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(void)setName:(id)arg1 ;
-(void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithKind:(unsigned long long)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(id)prefix;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)canonicalXMLStringPreservingComments:(char)arg1 ;
-(id)XPath;
-(void)_resolveName;
-(long long)_prefixIndex;
-(char)_nameIsEqualToNameOfNode:(id)arg1 ;
-(id)initWithKind:(unsigned long long)arg1 name:(id)arg2 stringValue:(id)arg3 ;
-(char)_setPrefix:(id)arg1 ;
-(long long)_caseSensitiveCompare:(id)arg1 ;
-(id)localName;
-(void)_setLocalName:(id)arg1 ;
-(id)initWithKind:(unsigned long long)arg1 name:(id)arg2 stringValue:(id)arg3 URI:(id)arg4 ;
-(id)initWithKind:(unsigned long long)arg1 localName:(id)arg2 stringValue:(id)arg3 URI:(id)arg4 ;
@end
