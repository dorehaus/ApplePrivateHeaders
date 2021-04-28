/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapNode.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding, NSSecureCoding> {

	id* _attributes;
	id _attributesAsEncoded;

}
+(void)initialize;
+(char)supportsSecureCoding;
-(id)initWithValues:(id*)arg1 objectID:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(const id*)attributeValues;
@end
