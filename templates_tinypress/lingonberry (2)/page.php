<?php get_header(); ?>

<div class="content section-inner">						
			
	<div class="posts">

		<div class="post">
		
			<?php if (have_posts()) : while (have_posts()) : the_post(); ?>
		
				<div class="content-inner <?php if ( comments_open() ) {; ?>comments-allowed<?php }; ?>">
										
					<div class="post-header">
					
						<?php if ( has_post_thumbnail() ) : ?>
	
							<div class="featured-media">
							
								<a href="<?php the_permalink(); ?>" rel="bookmark" title="<?php the_title(); ?>">
								
									<?php the_post_thumbnail('post-image'); ?>
									
									<?php if ( !empty(get_post(get_post_thumbnail_id())->post_excerpt) ) : ?>
													
										<div class="media-caption-container">
										
											<p class="media-caption"><?php echo get_post(get_post_thumbnail_id())->post_excerpt; ?></p>
											
										</div>
										
									<?php endif; ?>
									
								</a>
										
							</div> <!-- /featured-media -->
								
						<?php endif; ?>
												
					    <h2 class="post-title"><?php the_title(); ?></h2>
					    				    
				    </div> <!-- /post-header -->
				   				        			        		                
					<div class="post-content">
								                                        
						<?php the_content(); ?>
						
						<?php if ( current_user_can( 'manage_options' ) ) : ?>
																		
							<p><?php edit_post_link( __('Edit', 'lingonberry') ); ?></p>
						
						<?php endif; ?>
															            			                        
					</div> <!-- /post-content -->
					
				</div> <!-- /post-inner -->
		
				<?php comments_template( '', true ); ?>
			
			<?php endwhile; else: ?>
	
				<p><?php _e("We couldn't find any posts that matched your query. Please try again.", "lingonberry"); ?></p>
		
			<?php endif; ?>

		</div> <!-- /post -->
	
	</div> <!-- /posts -->

	<div class="clear"></div>
	
</div> <!-- /content section-inner -->
								
<?php get_footer(); ?>