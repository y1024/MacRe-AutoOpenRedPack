//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionView.h"

@class NSArrayController;

@interface AIImageCollectionView : NSCollectionView
{
    id <AIImageCollectionViewDelegate> delegate;
    NSArrayController *itemsController;
    long long highlightStyle;
    double highlightSize;
    double highlightCornerRadius;
    unsigned long long highlightedIndex;
}

@property unsigned long long highlightedIndex; // @synthesize highlightedIndex;
@property double highlightCornerRadius; // @synthesize highlightCornerRadius;
@property double highlightSize; // @synthesize highlightSize;
@property long long highlightStyle; // @synthesize highlightStyle;
@property NSArrayController *itemsController; // @synthesize itemsController;
@property(nonatomic) id <AIImageCollectionViewDelegate> delegate; // @synthesize delegate;
- (void)keyDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)indexAtPoint:(struct CGPoint)arg1;
- (void)resetHighlight;
- (void)selectItemAtIndex:(unsigned long long)arg1;
- (void)highlightItemAtIndex:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)AI_initImageCollectionView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
