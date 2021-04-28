/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@class NSMutableArray, TSDLayoutGeometry, TPPageLayout, NSArray;

@interface TSDAbstractLayout : NSObject {

	TSDAbstractLayout* _parent;
	NSMutableArray* _children;
	TSDLayoutGeometry* _geometry;
	CGPoint _interimPosition;
	char _interimPositionXSet;
	char _interimPositionYSet;
	CGPoint _lastInterimPosition;
	char _lastInterimPositionXSet;
	char _lastInterimPositionYSet;

}

@property (nonatomic,readonly) unsigned pageIndex; 
@property (nonatomic,readonly) TPPageLayout * pageLayout; 
@property (nonatomic,copy) TSDLayoutGeometry * geometry;                                          //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) TSDLayoutGeometry * geometryInParent; 
@property (nonatomic,readonly) CGAffineTransform transformInParent; 
@property (nonatomic,readonly) CGRect frameInParent; 
@property (nonatomic,readonly) TSDLayoutGeometry * geometryInRoot; 
@property (nonatomic,readonly) CGAffineTransform transformInRoot; 
@property (nonatomic,readonly) CGRect frameInRoot; 
@property (nonatomic,readonly) CGRect clipRect; 
@property (nonatomic,readonly) CGRect alignmentFrame; 
@property (nonatomic,readonly) CGRect alignmentFrameInParent; 
@property (nonatomic,readonly) CGRect alignmentFrameInRoot; 
@property (nonatomic,readonly) CGRect alignmentFrameForInlineLayout; 
@property (nonatomic,readonly) CGRect alignmentFrameForInlineLayoutInRoot; 
@property (nonatomic,readonly) TSDLayoutGeometry * geometryForTransforming; 
@property (nonatomic,readonly) NSArray * visibleGeometries; 
@property (nonatomic,readonly) char isAxisAlignedUnflippedInRoot; 
@property (assign,nonatomic) TSDAbstractLayout * parent;                                          //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) TSDAbstractLayout * root; 
@property (nonatomic,copy) NSArray * children;                                                    //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) char providesGuidesForChildLayouts; 
@property (nonatomic,readonly) char exclusivelyProvidesGuidesForChildLayouts; 
@property (nonatomic,readonly) TSDAbstractLayout * parentLayoutForProvidingGuides; 
@property (nonatomic,readonly) NSArray * layoutsForProvidingGuidesForChildLayouts; 
@property (nonatomic,readonly) CGRect frameForCulling; 
@property (nonatomic,readonly) char shouldBeIncludedInParentFrameForCulling; 
@property (nonatomic,readonly) CGRect insertionFrame; 
@property (nonatomic,readonly) CGRect insertionFrameInRoot; 
@property (nonatomic,readonly) CGRect alignmentFrameForProvidingGuidesInRoot; 
@property (nonatomic,readonly) char shouldSnapWhileResizing; 
@property (assign,nonatomic) double interimPositionX; 
@property (assign,nonatomic) double interimPositionY; 
@property (nonatomic,readonly) CGPoint lastInterimPosition;                                       //@synthesize lastInterimPosition=_lastInterimPosition - In the implementation block
@property (nonatomic,readonly) CGPoint alignmentFrameOriginForFixingInterimPosition; 
@property (nonatomic,readonly) CGPoint positionInRootForAttachmentPositioner; 
@property (nonatomic,readonly) NSEdgeInsets captionEdgeInsets; 
@property (nonatomic,readonly) char shouldUseCaptionEdgeInsetsInInterimPosition; 
@property (nonatomic,readonly) char isRootLayoutForInspectorGeometry; 
@property (nonatomic,readonly) char isRootLevelForInlineGeometry; 
@property (nonatomic,readonly) char supportsRotation; 
@property (nonatomic,readonly) char supportsFlipping; 
@property (nonatomic,readonly) char supportsCalloutAttributes; 
-(TPPageLayout *)pageLayout;
-(unsigned)pageIndex;
-(void)dealloc;
-(id)init;
-(TSDAbstractLayout *)parent;
-(CGAffineTransform)transform;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addChild:(id)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(TSDAbstractLayout *)root;
-(CGRect)frame;
-(void)setParent:(TSDAbstractLayout *)arg1 ;
-(CGRect)clipRect;
-(TSDLayoutGeometry *)geometry;
-(void)setGeometry:(TSDLayoutGeometry *)arg1 ;
-(void)removeFromParent;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(CGAffineTransform)transformInRoot;
-(void)fixTransformFromInterimPosition;
-(CGRect)frameInRoot;
-(CGRect)rectInRoot:(CGRect)arg1 ;
-(TSDLayoutGeometry *)geometryInRoot;
-(char)supportsRotation;
-(CGRect)alignmentFrame;
-(CGPoint)alignmentFrameOriginForFixingInterimPosition;
-(id)geometryInRoot:(id)arg1 ;
-(char)isRootLayoutForInspectorGeometry;
-(void)fixTransformFromLastInterimPosition;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(CGRect)frameForCulling;
-(CGRect)rectInParent:(CGRect)arg1 ;
-(CGAffineTransform)transformInParent;
-(char)providesGuidesForChildLayouts;
-(TSDAbstractLayout *)parentLayoutForProvidingGuides;
-(void)addLayoutsInRect:(CGRect)arg1 toArray:(id)arg2 deep:(char)arg3 ;
-(CGRect)alignmentFrameInRoot;
-(void)p_fixTransformFromInterimPosition:(CGPoint)arg1 interimPositionXSet:(char)arg2 interimPositionYSet:(char)arg3 ;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(TSDLayoutGeometry *)geometryInParent;
-(TSDLayoutGeometry *)geometryForTransforming;
-(NSArray *)visibleGeometries;
-(CGRect)frameInParent;
-(char)isAxisAlignedUnflippedInRoot;
-(NSArray *)layoutsForProvidingGuidesForChildLayouts;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2 ;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(char)shouldSnapWhileResizing;
-(double)interimPositionX;
-(void)setInterimPositionX:(double)arg1 ;
-(double)interimPositionY;
-(void)setInterimPositionY:(double)arg1 ;
-(CGPoint)positionInRootForAttachmentPositioner;
-(char)supportsFlipping;
-(char)canRotateChildLayout:(id)arg1 ;
-(char)isRootLevelForInlineGeometry;
-(CGRect)alignmentFrameInParent;
-(CGRect)insertionFrame;
-(char)shouldBeIncludedInParentFrameForCulling;
-(NSEdgeInsets)captionEdgeInsets;
-(char)shouldUseCaptionEdgeInsetsInInterimPosition;
-(CGRect)clippedRectInRoot:(CGRect)arg1 ;
-(char)supportsCalloutAttributes;
-(void)p_clearParentPointerForDealloc;
-(CGRect)alignmentFrameForInlineLayout;
-(CGRect)insertionFrameInRoot;
-(char)exclusivelyProvidesGuidesForChildLayouts;
-(CGRect)alignmentFrameForInlineLayoutInRoot;
-(id)childLayoutContainingPossibleDescendentLayout:(id)arg1 ;
-(CGPoint)lastInterimPosition;
@end

